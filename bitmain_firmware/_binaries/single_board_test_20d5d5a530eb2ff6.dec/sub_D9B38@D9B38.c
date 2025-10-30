int __fastcall sub_D9B38(_DWORD *a1, _DWORD *a2)
{
  int v2; // r3
  int (*v3)(void); // r3

  if ( *a1 != *a2 )
    return -1;
  v2 = a1[3];
  if ( v2 && (v3 = *(int (**)(void))(v2 + 76)) != 0 )
    return v3();
  else
    return -2;
}
