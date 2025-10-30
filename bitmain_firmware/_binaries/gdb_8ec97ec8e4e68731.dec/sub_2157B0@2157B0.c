int __fastcall sub_2157B0(__int64 a1)
{
  int v1; // r3
  int v3; // [sp+0h] [bp-Ch] BYREF
  int v4; // [sp+4h] [bp-8h] BYREF

  v1 = dword_4896B8;
  v3 = HIDWORD(a1);
  v4 = a1;
  if ( dword_4896B8 == dword_4896BC )
  {
    LODWORD(a1) = ((int (__fastcall *)(int *, int, int *, int *))sub_216104)(&dword_4896B4, dword_4896B8, &v4, &v3);
  }
  else
  {
    if ( dword_4896B8 )
      *(_QWORD *)dword_4896B8 = a1;
    dword_4896B8 = v1 + 8;
  }
  return a1;
}
