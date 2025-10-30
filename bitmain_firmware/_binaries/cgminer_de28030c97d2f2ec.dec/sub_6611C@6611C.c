int __fastcall sub_6611C(_DWORD *a1, char *a2, int a3)
{
  size_t v3; // r0

  if ( a2 )
  {
    v3 = strlen(a2);
    if ( sub_65C6C((int)a2, v3) )
      return sub_6605C(a1, a2, a3);
  }
  sub_65DB8(a3);
  return -1;
}
