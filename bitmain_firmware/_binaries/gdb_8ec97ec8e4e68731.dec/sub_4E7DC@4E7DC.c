_DWORD *__fastcall sub_4E7DC(_DWORD *result, int a2)
{
  int v3; // r0
  int *v4; // r5
  int *v5; // r0

  if ( result[21] )
  {
    v3 = ps_getpid_0(result);
    v4 = sub_4D6EC(v3);
    v5 = sub_4D6EC(a2);
    return memcpy(v5 + 2, v4 + 2, 0x100u);
  }
  return result;
}
