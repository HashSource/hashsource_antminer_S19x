int __fastcall sub_40924(int a1, const void *a2)
{
  const char *v3; // r0
  int v4; // r0
  int v5; // r6
  char v7[48]; // [sp+0h] [bp-30h] BYREF

  dword_705300 = (int)malloc(0x174u);
  v3 = (const char *)memcpy((void *)dword_705300, a2, 0x174u);
  v4 = sub_3F5F0(v3);
  if ( sub_6DC7C(v4) )
  {
    sub_1E938(v7, 0x30u);
    printf("%s ", v7);
    printf("%s : hal platform init failed\n", "pt_init");
    v5 = 4;
    strcpy(byte_63B8D0, "hal platform init failed");
    sub_3CC5C((int)byte_63B8D0, v7);
    sub_472C0(4, 0);
    return v5;
  }
  dword_21C100 = sub_6E938(0, 0);
  if ( dword_21C100 < 0 )
  {
    sub_1E938(v7, 0x30u);
    printf("%s ", v7);
    printf("%s : init fan failed\n", "pt_init");
    strcpy(byte_63B9D0, "init fan failed");
    sub_3CC5C((int)byte_63B9D0, v7);
    v5 = 5;
    sub_472C0(5, 0);
    return v5;
  }
  *(_DWORD *)(dword_705300 + 140) = 72;
  *(_DWORD *)(dword_705300 + 144) = 0;
  return 0;
}
