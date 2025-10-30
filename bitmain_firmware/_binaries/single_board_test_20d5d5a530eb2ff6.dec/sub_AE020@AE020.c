int __fastcall sub_AE020(_BYTE **a1)
{
  _BYTE *v1; // r3

  v1 = *a1;
  *v1 = 0;
  v1[1] = 0;
  *a1 = v1 + 2;
  return 2;
}
