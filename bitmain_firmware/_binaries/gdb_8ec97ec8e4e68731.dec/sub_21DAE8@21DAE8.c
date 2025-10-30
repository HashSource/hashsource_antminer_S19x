int __fastcall sub_21DAE8(_DWORD *a1, int a2, int a3, int a4, int (__fastcall *a5)(_DWORD, int))
{
  int result; // r0
  unsigned int v8; // r6
  int v9; // r1
  char v10; // r2
  int v11; // r3
  unsigned int v12; // r0
  unsigned int v13; // r3
  bool v14; // cc
  int v15; // r3
  bool v16; // zf
  _DWORD _0[12]; // [sp+0h] [bp-18h] BYREF

  result = sub_C2900(a1, a2, _0);
  if ( result )
  {
    v8 = a3 - 1;
    do
    {
      v9 = result;
      v10 = *(_BYTE *)(result + 32);
      v11 = *(_BYTE *)(result + 20) & 0x1F;
      v12 = *(_BYTE *)(result + 20) & 0x1D;
      v13 = v11 - 4;
      v14 = v12 > 0xC;
      if ( v12 != 12 )
        v14 = v13 > 1;
      v15 = v10 & 7;
      if ( !v14 )
      {
        v16 = v8 == 1;
        if ( v8 <= 1 )
          v16 = v15 == 2;
        if ( v16 )
          goto LABEL_14;
      }
      if ( v15 == a3 )
      {
LABEL_14:
        result = a5(_0[11], v9);
        if ( !result )
          break;
      }
      result = sub_C294C(a2, (int)_0);
    }
    while ( result );
  }
  return result;
}
