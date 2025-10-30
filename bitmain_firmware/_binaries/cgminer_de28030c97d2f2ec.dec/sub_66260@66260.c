int __fastcall sub_66260(_DWORD *a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v10; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  if ( !a1 || *a1 || !a2 || *a2 )
    return -1;
  v3 = sub_6655C(a2);
  for ( i = sub_66698(v3); i; i = sub_66698(v5) )
  {
    v6 = sub_66788(i);
    v10 = sub_666D4(v6);
    if ( !v10 )
      break;
    if ( sub_65E1C((int)a1, i, v10) )
      return -1;
    v4 = sub_66788(i);
    v5 = sub_66628(a2, v4);
  }
  return 0;
}
