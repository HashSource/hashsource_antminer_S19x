_DWORD *sub_1900AC()
{
  _DWORD *result; // r0
  _DWORD *v1; // r4
  _DWORD *v2; // r4
  void *v3; // r0
  _DWORD *v4; // r7
  _DWORD *v5; // r0
  int v6; // [sp+10h] [bp-64h]
  _DWORD v7[5]; // [sp+18h] [bp-5Ch] BYREF
  int v8; // [sp+2Ch] [bp-48h] BYREF
  int v9; // [sp+30h] [bp-44h]
  int v10; // [sp+34h] [bp-40h]
  int s[15]; // [sp+38h] [bp-3Ch] BYREF

  v6 = sub_183688();
  result = sub_98F50(&v8, *(_DWORD *)(v6 + 12));
  v1 = (_DWORD *)dword_487944;
  if ( dword_487944 )
  {
    while ( *(_DWORD *)(v6 + 12) != v1[1] )
    {
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        return result;
    }
    v2 = v1 + 3;
    result = (_DWORD *)sub_98F78(v2, &dword_475848);
    if ( !result )
    {
      if ( dword_487930 )
      {
        v5 = (_DWORD *)sub_242FC8(0);
        sub_2594B0(*v5, "displaced-stepping in-process while detaching");
      }
      *(_BYTE *)(v6 + 134) = 1;
      while ( 1 )
      {
        result = (_DWORD *)sub_98F78(v2, &dword_475848);
        if ( result )
          break;
        v3 = memset(s, 0, 0x38u);
        dword_4896D8 = 1;
        sub_234884(v3);
        sub_185CC0((int)v7, v8, v9, v10, &s[4], 0);
        s[0] = v7[0];
        s[1] = v7[1];
        s[2] = v7[2];
        if ( dword_487930 )
          sub_187F00(v8, v9, v10, s[0], s[1], s[2], (int)&s[4]);
        v4 = sub_9253C((int)dword_23F744, (int)&dword_46BBCC);
        sub_18EF44(s);
        sub_92640(v4);
        if ( !s[12] )
          sub_946E0("Program exited while detaching");
      }
    }
  }
  return result;
}
