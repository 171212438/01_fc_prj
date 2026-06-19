param(
    [Parameter(Mandatory = $true)]
    [string]$FilePath
)

$ErrorActionPreference = 'Stop'

$srcRoot = 'D:\Workspace\FlagChip\01_fc_prj'
$dstRoot = '\\192.168.10.1\WinShare\FlagChip\01_fc_prj'

$srcRootFull = [System.IO.Path]::GetFullPath($srcRoot).TrimEnd('\')
$srcFileFull = [System.IO.Path]::GetFullPath($FilePath)

$prefix = $srcRootFull + '\'

$isInSourceRoot = $srcFileFull.StartsWith(
    $prefix,
    [System.StringComparison]::OrdinalIgnoreCase
)

if (-not $isInSourceRoot) {
    exit 0
}

$relPath = $srcFileFull.Substring($prefix.Length)

if ($relPath -match '^(?:\.vscode|\.git)\\') {
    exit 0
}

$dstFile = Join-Path -Path $dstRoot -ChildPath $relPath
$dstDir = Split-Path -Path $dstFile -Parent

New-Item -ItemType Directory -Force -Path $dstDir | Out-Null

Copy-Item -LiteralPath $srcFileFull -Destination $dstFile -Force
