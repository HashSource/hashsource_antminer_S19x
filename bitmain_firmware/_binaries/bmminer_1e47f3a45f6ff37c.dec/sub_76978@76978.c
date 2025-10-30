_DWORD *__fastcall sub_76978(_DWORD *a1)
{
  int v2; // r0
  int v5; // [sp+8h] [bp-14h]
  char *v6; // [sp+Ch] [bp-10h]
  _DWORD *v7; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v7 = sub_75ED4();
  if ( !v7 )
    return 0;
  for ( i = sub_7655C(a1); i; i = sub_76628(a1, i) )
  {
    v6 = (char *)sub_76698(i);
    v5 = sub_766D4(i);
    v2 = sub_78348(v5);
    sub_7605C(v7, v6, v2);
  }
  return v7;
}
