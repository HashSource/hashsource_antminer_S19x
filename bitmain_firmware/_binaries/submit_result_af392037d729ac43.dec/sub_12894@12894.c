int __fastcall sub_12894(_DWORD *a1)
{
  unsigned int v1; // r3
  int result; // r0
  int (__fastcall *v4)(_DWORD *, int, _DWORD); // r3
  int v5; // r0

  v1 = a1[257];
  if ( v1 < a1[256] )
    goto LABEL_2;
  v4 = (int (__fastcall *)(_DWORD *, int, _DWORD))a1[258];
  a1[257] = 0;
  v5 = v4(a1, 1024, a1[259]);
  a1[256] = v5;
  if ( (unsigned int)(v5 - 1) <= 0xFFFFFFFD )
  {
    v1 = a1[257];
LABEL_2:
    result = *((unsigned __int8 *)a1 + v1);
    a1[257] = v1 + 1;
    return result;
  }
  return -1;
}
