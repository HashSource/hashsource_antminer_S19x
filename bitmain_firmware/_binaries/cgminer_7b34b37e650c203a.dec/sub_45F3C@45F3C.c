int __fastcall sub_45F3C(_DWORD *a1)
{
  unsigned int v1; // r3
  int (__fastcall *v3)(_DWORD *, int, _DWORD); // r3
  int v4; // r0
  int result; // r0

  v1 = a1[257];
  if ( v1 < a1[256] )
    goto LABEL_4;
  v3 = (int (__fastcall *)(_DWORD *, int, _DWORD))a1[258];
  a1[257] = 0;
  v4 = v3(a1, 1024, a1[259]);
  a1[256] = v4;
  if ( (unsigned int)(v4 - 1) <= 0xFFFFFFFD )
  {
    v1 = a1[257];
LABEL_4:
    result = *((unsigned __int8 *)a1 + v1);
    a1[257] = v1 + 1;
    return result;
  }
  return -1;
}
