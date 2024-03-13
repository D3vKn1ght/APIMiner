# APIMiner

## API Logging Tool for Windows Applications

### Version 1.1

APIMiner is a tool for logging API calls in Windows executables, useful for development and security analysis.

**Download:** [APIMiner v1.1](https://github.com/trung501/APIMiner/releases/tag/v1.1)

**Features:**
- Real-time logging of API calls.
- Simple configuration via `apiminer_config.txt`.

**Setup:**
1. Place `apiminer_config.txt` at `C:\apiminer_config.txt` with the line `log-dir-path=C:\Users\<username>\Documents\`.
2. Ensure DLLs (`apiminer-monitor-x86.dll` or `apiminer-monitor-x64.dll`) are in the same directory as the respective APIMiner executable.

**Usage:**
- For 32-bit: `APIMiner.exe --app <sample_path> --dll apiminer-monitor-x86.dll`
- For 64-bit: `APIMiner64.exe --app <sample_path> --dll apiminer-monitor-x64.dll`

**Support:** Issues can be reported on the [GitHub issue tracker](https://github.com/trung501/APIMiner/issues).

**License:** [MIT License](LICENSE)

Stay tuned to our GitHub for future updates.
