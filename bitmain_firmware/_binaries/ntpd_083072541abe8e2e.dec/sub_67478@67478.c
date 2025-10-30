_DWORD *__fastcall sub_67478(int a1, unsigned int a2)
{
  _DWORD *v4; // r4

  sub_6E2CC(1);
  if ( dnsworker_contexts_alloc <= a2 )
  {
    dnsworker_contexts = (int)sub_63BA4(
                                (void *)dnsworker_contexts,
                                4 * ((a2 + 5) & 0xFFFFFFFC),
                                4 * dnsworker_contexts_alloc,
                                1);
    dnsworker_contexts_alloc = (a2 + 5) & 0xFFFFFFFC;
    v4 = sub_63BA4(0, 0xCu, 0, 1);
    *(_DWORD *)(dnsworker_contexts + 4 * a2) = v4;
  }
  else
  {
    v4 = *(_DWORD **)(dnsworker_contexts + 4 * a2);
    if ( !v4 )
    {
      v4 = sub_63BA4(0, 0xCu, 0, 1);
      *(_DWORD *)(dnsworker_contexts + 4 * a2) = v4;
    }
  }
  sub_6E2CC(0);
  v4[1] = 0;
  v4[2] = 0;
  *v4 = a1;
  return v4;
}
