int __fastcall sub_11C9E4(int a1, int *a2)
{
  int v2; // r3

  v2 = *a2;
  if ( a1 == 1 )
  {
    *(_DWORD *)(v2 + 8) = 0;
    return 1;
  }
  else
  {
    if ( a1 == 3 )
      X509_NAME_free(*(_DWORD *)(v2 + 8));
    return 1;
  }
}
