_DWORD *__fastcall sub_66978(_DWORD *a1)
{
  int v2; // r0
  int v5; // [sp+8h] [bp-14h]
  char *v6; // [sp+Ch] [bp-10h]
  _DWORD *v7; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v7 = sub_65ED4();
  if ( !v7 )
    return 0;
  for ( i = sub_6655C(a1); i; i = sub_66628(a1, i) )
  {
    v6 = (char *)sub_66698(i);
    v5 = sub_666D4(i);
    v2 = sub_68348(v5);
    sub_6605C(v7, v6, v2);
  }
  return v7;
}
