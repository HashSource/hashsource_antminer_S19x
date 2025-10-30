int __fastcall sub_13779C(int a1, int *a2)
{
  int v3; // r4

  if ( a1 == 3 )
  {
    v3 = *a2;
    sub_DA240(*(_DWORD *)(*a2 + 32));
    X509_free(*(_DWORD *)(v3 + 28));
    sub_D1504(*(int **)(v3 + 36));
  }
  return 1;
}
