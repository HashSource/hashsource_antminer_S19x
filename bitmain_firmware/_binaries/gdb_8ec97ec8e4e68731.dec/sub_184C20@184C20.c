bool __fastcall sub_184C20(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _BOOL4 result; // r0
  _DWORD *v7; // r4
  int *v8; // r5
  _DWORD v9[4]; // [sp+4h] [bp-10h] BYREF
  int varg_r3; // [sp+2Ch] [bp+18h]

  v9[0] = a1;
  v9[1] = a2;
  v9[2] = a3;
  result = sub_98F78(&dword_4878EC, v9);
  if ( result )
  {
    result = varg_r3;
    dword_4878EC = varg_r3;
    dword_4878F0 = a5;
    dword_4878F4 = a6;
  }
  v7 = (_DWORD *)dword_487944;
  if ( dword_487944 )
  {
    do
    {
      v8 = v7 + 3;
      result = sub_98F78(v7 + 3, v9);
      v7 = (_DWORD *)*v7;
      if ( result )
      {
        result = varg_r3;
        *v8 = varg_r3;
        v8[1] = a5;
        v8[2] = a6;
      }
    }
    while ( v7 );
  }
  return result;
}
