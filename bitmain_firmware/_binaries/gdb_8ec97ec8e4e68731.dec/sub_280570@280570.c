char *__fastcall sub_280570(char *result)
{
  int v1; // r8
  char *v2; // r5
  size_t v3; // r6
  int v4; // r7
  int v5; // r1

  if ( result && *((_DWORD *)result + 4) == 1 )
  {
    v1 = *((_DWORD *)result + 1);
    v2 = (char *)dword_48AB10[0];
    v3 = *((_DWORD *)result + 2) - v1;
    v4 = v3 + 1;
    if ( (int)(v3 + 1) >= dword_48AB94 )
    {
      v5 = v4 & 0x1F;
      if ( v4 <= 0 )
        v5 = -(-v4 & 0x1F);
      dword_48AB94 += v3 + 33 - v5;
      v2 = (char *)sub_93050((void *)dword_48AB10[0], dword_48AB94);
      dword_48AB10[0] = (int)v2;
    }
    result = strncpy(v2, (const char *)(dword_48AAD4 + v1), v3);
    v2[v3] = 0;
  }
  else if ( dword_48AB94 > 0 )
  {
    *(_BYTE *)dword_48AB10[0] = 0;
  }
  return result;
}
