_DWORD *__fastcall sub_668B8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v8; // [sp+Ch] [bp-10h]
  _DWORD *v9; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v9 = sub_65ED4();
  if ( !v9 )
    return 0;
  v2 = sub_6655C(a1);
  for ( i = sub_66698(v2); i; i = sub_66698(v4) )
  {
    v5 = sub_66788(i);
    v8 = sub_666D4(v5);
    if ( !v8 )
      break;
    sub_65E1C((int)v9, i, v8);
    v3 = sub_66788(i);
    v4 = sub_66628(a1, v3);
  }
  return v9;
}
