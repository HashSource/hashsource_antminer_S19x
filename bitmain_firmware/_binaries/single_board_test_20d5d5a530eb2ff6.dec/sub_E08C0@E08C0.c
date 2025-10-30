unsigned int *__fastcall sub_E08C0(unsigned int *result, unsigned int *a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r4
  unsigned int v4; // r2
  int v5; // r3

  if ( dword_6E1A64 > (unsigned int)result || (unsigned int)result >= dword_6E1A64 + 4 * dword_6E1A68 )
    sub_BC328("assertion failed: WITHIN_FREELIST(list)", "crypto/mem_sec.c", 350);
  v2 = dword_6E1A5C;
  if ( dword_6E1A5C > (unsigned int)a2
    || (v3 = dword_6E1A60 + dword_6E1A5C, (unsigned int)a2 >= dword_6E1A60 + dword_6E1A5C) )
  {
    sub_BC328("assertion failed: WITHIN_ARENA(ptr)", "crypto/mem_sec.c", 351);
  }
  v4 = *result;
  *a2 = *result;
  if ( v4 )
  {
    v5 = v2 > v4;
    if ( v3 <= v4 )
      v5 |= 1u;
    if ( v5 )
      sub_BC328("assertion failed: temp->next == NULL || WITHIN_ARENA(temp->next)", "crypto/mem_sec.c", 355);
    a2[1] = (unsigned int)result;
    if ( result != *(unsigned int **)(v4 + 4) )
      sub_BC328("assertion failed: (char **)temp->next->p_next == list", "crypto/mem_sec.c", 359);
    *(_DWORD *)(v4 + 4) = a2;
    *result = (unsigned int)a2;
  }
  else
  {
    a2[1] = (unsigned int)result;
    *result = (unsigned int)a2;
  }
  return result;
}
