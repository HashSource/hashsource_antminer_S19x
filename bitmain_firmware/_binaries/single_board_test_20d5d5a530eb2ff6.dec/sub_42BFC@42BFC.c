_DWORD *__fastcall sub_42BFC(_DWORD *result)
{
  unsigned int v1; // r7
  _DWORD *v2; // r4
  int v3; // r6
  char v4[52]; // [sp+0h] [bp-34h] BYREF

  v1 = *(_DWORD *)(dword_705300 + 368);
  if ( v1 <= 0xA )
  {
    v2 = result;
    v3 = dword_705300 + 16 * v1;
    if ( !strcmp((const char *)(dword_223680 + 32), "BHB56907") )
      *v2 = 21 * (unsigned __int8)byte_7050F8 + *(_DWORD *)(v3 + 188);
    else
      *v2 = 3 * (unsigned __int8)byte_7050F8 + *(_DWORD *)(v3 + 188);
    v2[1] = *(_DWORD *)(dword_705300 + 16 * *(_DWORD *)(dword_705300 + 368) + 192);
    v2[3] = *(_DWORD *)(dword_705300 + 16 * *(_DWORD *)(dword_705300 + 368) + 200);
    v2[2] = *(_DWORD *)(dword_705300 + 16 * *(_DWORD *)(dword_705300 + 368) + 196);
    sub_1E938(v4, 0x30u);
    printf("%s ", v4);
    printf("%s : match level:%d\n", "get_match_level", *v2);
    snprintf(byte_63F3D8, 0x100u, "match level:%d", *v2);
    return (_DWORD *)sub_3CC5C((int)byte_63F3D8, v4);
  }
  else
  {
    *result = -1;
  }
  return result;
}
