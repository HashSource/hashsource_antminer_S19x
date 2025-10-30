void __fastcall sub_190250(int a1)
{
  void *v1; // r0
  _DWORD *v2; // r0
  void *v3; // [sp+10h] [bp-64h]
  _DWORD *v4; // [sp+14h] [bp-60h]
  _DWORD v5[5]; // [sp+18h] [bp-5Ch] BYREF
  int v6; // [sp+2Ch] [bp-48h]
  int v7; // [sp+30h] [bp-44h]
  int v8; // [sp+34h] [bp-40h]
  int s[15]; // [sp+38h] [bp-3Ch] BYREF

  if ( dword_487930 )
  {
    v2 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v2, "infrun: wait_for_inferior ()\n");
  }
  v3 = sub_9253C((int)sub_187120, 0);
  v4 = sub_9253C((int)dword_23F744, (int)&dword_46BBCC);
  do
  {
    v6 = dword_46BBCC;
    v7 = dword_46BBD0;
    v8 = dword_46BBD4;
    v1 = memset(s, 0, 0x38u);
    dword_4896D8 = 1;
    sub_234884(v1);
    sub_185CC0((int)v5, v6, v7, v8, &s[4], 0);
    s[0] = v5[0];
    s[1] = v5[1];
    s[2] = v5[2];
    if ( dword_487930 )
      sub_187F00(v6, v7, v8, s[0], s[1], s[2], (int)&s[4]);
    sub_18EF44(s);
  }
  while ( s[12] );
  sub_92640(v4);
  sub_92620(v3);
}
