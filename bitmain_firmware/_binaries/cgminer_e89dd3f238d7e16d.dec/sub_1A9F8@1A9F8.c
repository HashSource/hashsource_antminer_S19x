int __fastcall sub_1A9F8(int a1, char *a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  _DWORD *v10; // [sp+14h] [bp-18h]
  _DWORD *v11; // [sp+18h] [bp-14h]
  _DWORD *v12; // [sp+1Ch] [bp-10h]
  char *src; // [sp+24h] [bp-8h]

  if ( !a1 || !a2 )
    return -2147483641;
  v12 = (_DWORD *)sub_652F0(a1, "STATUS");
  if ( !v12 || *v12 != 1 )
    return -2147483646;
  v11 = (_DWORD *)sub_65E88(v12, 0);
  if ( !v11 || *v11 )
    return -2147483646;
  v3 = sub_65860(v11);
  for ( src = (char *)sub_6599C(v3); src; src = (char *)sub_6599C(v5) )
  {
    v6 = sub_65A8C(src);
    v10 = (_DWORD *)sub_659D8(v6);
    if ( !v10 )
      break;
    strcat(a2, src);
    *(_WORD *)&a2[strlen(a2)] = 61;
    sub_1A550(a2, v10);
    *(_WORD *)&a2[strlen(a2)] = 44;
    v4 = sub_65A8C(src);
    v5 = sub_6592C(v11, v4);
  }
  a2[strlen(a2) - 1] = 124;
  sub_1A6F4(a2, a1);
  return 0;
}
