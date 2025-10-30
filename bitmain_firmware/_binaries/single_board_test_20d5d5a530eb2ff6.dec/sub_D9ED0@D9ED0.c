int __fastcall sub_D9ED0(int *a1, _DWORD *a2)
{
  int v4; // r4

  if ( !a2 )
    goto LABEL_4;
  if ( sub_CDD6C(a2) )
  {
    v4 = sub_CF304((int)a2, *a1);
    if ( !v4 )
    {
      sub_CDDF8((int)a2);
      sub_D0048(6, 187, 156, (int)"crypto/evp/p_lib.c", 394);
      return v4;
    }
LABEL_4:
    v4 = 1;
    sub_CDDF8(a1[5]);
    a1[5] = (int)a2;
    return v4;
  }
  sub_D0048(6, 187, 38, (int)"crypto/evp/p_lib.c", 389);
  return 0;
}
