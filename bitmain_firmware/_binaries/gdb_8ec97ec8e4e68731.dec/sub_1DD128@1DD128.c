int __fastcall sub_1DD128(int result, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // r4
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r2
  int v11; // r3
  bool v12; // zf
  _DWORD *v13; // r3
  _DWORD v14[3]; // [sp+4h] [bp+0h] BYREF
  _DWORD var18[14]; // [sp+10h] [bp+Ch] BYREF

  v6 = (_DWORD *)dword_4886C8;
  v14[0] = result;
  v14[1] = a2;
  v14[2] = a3;
  if ( dword_4886C8 )
  {
    do
    {
      v7 = *(_DWORD *)(v6[1] + 24);
      v8 = *(_DWORD *)(v6[1] + 28);
      var18[0] = *(_DWORD *)(v6[1] + 20);
      var18[1] = v7;
      var18[2] = v8;
      result = sub_98F78(var18, v14);
      v12 = result == 0;
      if ( result )
      {
        v11 = v6[1];
        result = var18[13];
        v9 = a5;
        v10 = a6;
      }
      v6 = (_DWORD *)*v6;
      if ( !v12 )
      {
        v13 = (_DWORD *)(v11 + 20);
        var18[3] = result;
        var18[4] = v9;
        var18[5] = v10;
        *v13 = result;
        v13[1] = v9;
        v13[2] = v10;
      }
    }
    while ( v6 );
  }
  return result;
}
