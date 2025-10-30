_BYTE *__fastcall sub_68440(int a1, unsigned int a2)
{
  _BYTE *v4; // r4
  void *v6; // r0

  sub_6F21C(1);
  if ( dnsworker_contexts_alloc <= a2 )
  {
    v6 = sub_64B04((void *)dnsworker_contexts, 4 * ((a2 + 5) & 0xFFFFFFFC), 4 * dnsworker_contexts_alloc, 1);
    dnsworker_contexts_alloc = (a2 + 5) & 0xFFFFFFFC;
    dnsworker_contexts = (int)v6;
    v4 = sub_64B04(0, 0xCu, 0, 1);
    *(_DWORD *)(dnsworker_contexts + 4 * a2) = v4;
  }
  else
  {
    v4 = *(_BYTE **)(dnsworker_contexts + 4 * a2);
    if ( !v4 )
    {
      v4 = sub_64B04(0, 0xCu, 0, 1);
      *(_DWORD *)(dnsworker_contexts + 4 * a2) = v4;
    }
  }
  sub_6F21C(0);
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v4[8] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[11] = 0;
  *(_DWORD *)v4 = a1;
  return v4;
}
