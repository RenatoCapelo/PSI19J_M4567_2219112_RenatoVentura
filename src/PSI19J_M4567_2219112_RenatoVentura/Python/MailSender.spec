# -*- mode: python ; coding: utf-8 -*-

block_cipher = None


a = Analysis(['MailSender.py'],
             pathex=['C:\\Users\\renat\\Documents\\GitHub\\PSI19J_M4567_2219112_RenatoVentura\\PSI19J_M4567_2219112_RenatoVentura\\Python'],
             binaries=[],
             datas=[],
             hiddenimports=[],
             hookspath=[],
             runtime_hooks=[],
             excludes=[],
             win_no_prefer_redirects=False,
             win_private_assemblies=False,
             cipher=block_cipher,
             noarchive=False)
pyz = PYZ(a.pure, a.zipped_data,
             cipher=block_cipher)
exe = EXE(pyz,
          a.scripts,
          a.binaries,
          a.zipfiles,
          a.datas,
          [],
          name='MailSender',
          debug=False,
          bootloader_ignore_signals=False,
          strip=False,
          upx=True,
          upx_exclude=[],
          runtime_tmpdir=None,
          console=False , icon='C:\\icon.ico')
