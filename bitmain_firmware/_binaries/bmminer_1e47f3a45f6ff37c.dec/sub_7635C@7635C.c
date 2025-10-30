int __fastcall sub_7635C(_DWORD *a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v10; // [sp+8h] [bp-Ch]
  char *i; // [sp+Ch] [bp-8h]

  if ( !a1 || *a1 || !a2 || *a2 )
    return -1;
  v3 = sub_7655C(a2);
  for ( i = (char *)sub_76698(v3); i; i = (char *)sub_76698(v5) )
  {
    v6 = sub_76788(i);
    v10 = sub_766D4(v6);
    if ( !v10 )
      break;
    if ( sub_75FEC(a1, i) )
      sub_75E1C((int)a1, (int)i, v10);
    v4 = sub_76788(i);
    v5 = sub_76628(a2, v4);
  }
  return 0;
}
