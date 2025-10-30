int __fastcall sub_667C8(_DWORD *a1, _DWORD *a2)
{
  int v2; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v11; // [sp+Ch] [bp-18h]
  int v12; // [sp+10h] [bp-14h]
  char *i; // [sp+14h] [bp-10h]

  v2 = sub_65F98(a1);
  if ( v2 != sub_65F98(a2) )
    return 0;
  v4 = sub_6655C(a1);
  for ( i = (char *)sub_66698(v4); i; i = (char *)sub_66698(v6) )
  {
    v7 = sub_66788((int)i);
    v12 = sub_666D4(v7);
    if ( !v12 )
      break;
    v11 = sub_65FEC(a2, i);
    if ( !sub_68180(v12, v11) )
      return 0;
    v5 = sub_66788((int)i);
    v6 = sub_66628(a1, v5);
  }
  return 1;
}
