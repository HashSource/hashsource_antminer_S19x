_DWORD *__fastcall sub_6E5D4(int a1, int a2)
{
  int v2; // r3
  _DWORD *result; // r0
  _DWORD *v4; // r4

  v2 = *(_DWORD *)(a2 + 156);
  if ( v2 != -1 )
    return (_DWORD *)(*(_DWORD *)(a1 + 52) + *(_DWORD *)(*(_DWORD *)(a2 + 144) + 4 * v2));
  v4 = (_DWORD *)sub_94700("dtrace-probe.c", 692, "sect_index_data not initialized");
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  result = (_DWORD *)sub_9836C(8);
  *v4 = result;
  v4[2] = result + 2;
  *result = "enabled";
  result[1] = "Enabled";
  v4[1] = result + 2;
  return result;
}
