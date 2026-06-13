SoftProjector3 - Quick run instructions

1) Unzip the archive (double-click the .zip) and move the application to the "Applications" folder.

2) If macOS blocks the app on first launch ("unidentified developer"), open it via Finder:
   - Right-click (or Control-click) the app -> Open -> click "Open" in the dialog.

3) As an alternative (for advanced users), remove Gatekeeper quarantine attribute:
   Open Terminal and run:
   xattr -d com.apple.quarantine /path/to/SoftProjector3.app

4) If you see other plugin/library errors on launch, ensure the full bundle was copied (do not run from inside the zip).

Notes:
- This build is not notarized/signed by Apple Developer ID. For the smoothest user experience, sign and notarize the app before public distribution.
- To automate signing/notarization, see `scripts/sign_and_notarize.sh` in the project.
