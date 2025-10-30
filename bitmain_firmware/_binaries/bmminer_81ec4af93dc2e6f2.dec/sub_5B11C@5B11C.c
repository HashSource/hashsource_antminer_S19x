__int64 __fastcall sub_5B11C(int a1)
{
  __int64 v1; // r2

  HIDWORD(v1) = *(_DWORD *)(dword_5314F8 + (a1 << 6) + 12);
  LODWORD(v1) = 0;
  return v1 | *(unsigned int *)(dword_5314F8 + (a1 << 6) + 8);
}
