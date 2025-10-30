int __fastcall sub_40E64(int a1)
{
  int result; // r0
  unsigned __int8 *v3; // r3
  int v4; // r4
  int v5; // r6
  char v6[48]; // [sp+8h] [bp-30h] BYREF

  sub_1E938(v6, 0x30u);
  printf("%s ", v6);
  printf("%s : do_core_reset\n", "do_core_reset");
  strcpy(byte_63BED0, "do_core_reset");
  sub_3CC5C((int)byte_63BED0, v6);
  sub_1E938(v6, 0x30u);
  printf("%s ", v6);
  printf(
    "%s : interval %d, total ASIC num %d\n",
    "do_core_reset",
    *(_DWORD *)(dword_705300 + 40),
    *(_DWORD *)(dword_705300 + 4));
  snprintf(
    byte_63BFD0,
    0x100u,
    "interval %d, total ASIC num %d",
    *(_DWORD *)(dword_705300 + 40),
    *(_DWORD *)(dword_705300 + 4));
  sub_3CC5C((int)byte_63BFD0, v6);
  sub_1E938(v6, 0x30u);
  printf("%s ", v6);
  printf("%s : ccdly pwth %d %d\n", "do_core_reset", *(_DWORD *)(dword_705300 + 48), *(_DWORD *)(dword_705300 + 52));
  snprintf(
    &byte_63BFD0[256],
    0x100u,
    "ccdly pwth %d %d",
    *(_DWORD *)(dword_705300 + 48),
    *(_DWORD *)(dword_705300 + 52));
  result = sub_3CC5C((int)&byte_63BFD0[256], v6);
  v3 = (unsigned __int8 *)dword_705300;
  if ( *(int *)(dword_705300 + 4) > 0 )
  {
    v4 = 0;
    do
    {
      if ( a1 )
      {
        v5 = *(unsigned __int8 *)(a1 + v4);
        if ( !*(_BYTE *)(a1 + v4) )
        {
          sub_7809C(*v3, *((_DWORD *)v3 + 10) * v4);
          usleep(0x2710u);
          sub_784E0(
            *(unsigned __int8 *)dword_705300,
            *(_DWORD *)(dword_705300 + 40) * v4,
            *(unsigned __int8 *)(dword_705300 + 60),
            v5);
          usleep(0x2710u);
          sub_784F4(
            *(unsigned __int8 *)dword_705300,
            *(_DWORD *)(dword_705300 + 40) * v4,
            *(unsigned __int8 *)(dword_705300 + 52),
            *(unsigned __int8 *)(dword_705300 + 48),
            v5);
          sub_7811C(*(unsigned __int8 *)dword_705300, *(_DWORD *)(dword_705300 + 40) * v4);
          usleep(0x2710u);
          sub_1E938(v6, 0x30u);
          printf("%s ", v6);
          printf("%s : do_core_reset asic:%d\n", "do_core_reset", v4);
          snprintf(byte_63C1D0, 0x100u, "do_core_reset asic:%d", v4);
          result = sub_3CC5C((int)byte_63C1D0, v6);
        }
      }
      else
      {
        sub_7809C(*v3, *((_DWORD *)v3 + 10) * v4);
        usleep(0x2710u);
        sub_784E0(
          *(unsigned __int8 *)dword_705300,
          *(_DWORD *)(dword_705300 + 40) * v4,
          *(unsigned __int8 *)(dword_705300 + 60),
          0);
        usleep(0x2710u);
        sub_784F4(
          *(unsigned __int8 *)dword_705300,
          *(_DWORD *)(dword_705300 + 40) * v4,
          *(unsigned __int8 *)(dword_705300 + 52),
          *(unsigned __int8 *)(dword_705300 + 48),
          0);
        sub_7811C(*(unsigned __int8 *)dword_705300, *(_DWORD *)(dword_705300 + 40) * v4);
        result = usleep(0x2710u);
      }
      v3 = (unsigned __int8 *)dword_705300;
      ++v4;
    }
    while ( *(_DWORD *)(dword_705300 + 4) > v4 );
  }
  return result;
}
