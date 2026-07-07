param(
    [Parameter(Mandatory = $true)]
    [string]$FilePath,

    [Parameter(Mandatory = $true)]
    [string]$LineNumber,

    [Parameter(Mandatory = $false)]
    [string]$SelectedText = ""
)

$ErrorActionPreference = 'Stop'

$projectRoot = [System.IO.Path]::GetFullPath(
    (Join-Path -Path $PSScriptRoot -ChildPath '..\..\..')
).TrimEnd('\')
$fileFull = [System.IO.Path]::GetFullPath($FilePath)
$projectRootName = Split-Path -Path $projectRoot -Leaf
$prefix = $projectRoot + '\'

if ($fileFull.StartsWith($prefix, [System.StringComparison]::OrdinalIgnoreCase)) {
    $relativePath = Join-Path -Path $projectRootName -ChildPath $fileFull.Substring($prefix.Length)
} else {
    $relativePath = $fileFull
}

$normalizedPath = $relativePath -replace '\\', '/'
$normalizedSelection = ($SelectedText -replace '\r?\n', ' ').Trim()
$result = "$normalizedPath line $LineNumber $normalizedSelection"

Set-Clipboard -Value $result
Write-Host "Copied: $result"
