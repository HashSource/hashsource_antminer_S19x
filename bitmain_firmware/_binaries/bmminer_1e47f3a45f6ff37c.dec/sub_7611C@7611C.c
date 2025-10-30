int __fastcall sub_7611C(_DWORD *a1, char *a2, int a3)
{
  size_t v3; // r0

  if ( a2 )
  {
    v3 = strlen(a2);
    if ( sub_75C6C((int)a2, v3) )
      return sub_7605C(a1, a2, a3);
  }
  sub_75DB8(a3);
  return -1;
}
