int __fastcall sub_29E88(unsigned __int8 *a1)
{
  int v2; // r6
  unsigned int v4; // r3
  char v5[48]; // [sp+0h] [bp-30h] BYREF

  if ( (unsigned __int8)byte_5FE894 < (unsigned int)(dword_22B69C - 1) )
  {
    v2 = (unsigned __int8)byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265808];
    if ( byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265808] )
    {
      sub_1E938(v5, 0x30u);
      printf("%s ", v5);
      printf(
        "%s : Not find history result index, and go on testing. gPattern_test_counter = %d\n",
        "find_submit_history_result_index",
        (unsigned __int8)byte_5FE894);
      snprintf(
        byte_60F4D4,
        0x100u,
        "Not find history result index, and go on testing. gPattern_test_counter = %d",
        (unsigned __int8)byte_5FE894);
      sub_3CC5C(byte_60F4D4, v5);
      return 2;
    }
    else
    {
      *a1 = byte_5FE894;
      sub_1E938(v5, 0x30u);
      printf("%s ", v5);
      printf("%s : find history result index: %d, and it is STRICT_STANDARD\n", "find_submit_history_result_index", *a1);
      snprintf(byte_60F3D4, 0x100u, "find history result index: %d, and it is STRICT_STANDARD", *a1);
      sub_3CC5C(byte_60F3D4, v5);
      return v2;
    }
  }
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf(
    "%s : We had do %d tests, and strict standard are not ok\n",
    "find_submit_history_result_index",
    (unsigned __int8)byte_5FE894 + 1);
  snprintf(byte_60F5D4, 0x100u, "We had do %d tests, and strict standard are not ok", (unsigned __int8)byte_5FE894 + 1);
  sub_3CC5C(byte_60F5D4, v5);
  if ( !dword_22B69C )
  {
LABEL_10:
    *a1 = byte_5FE894;
    sub_1E938(v5, 0x30u);
    printf("%s ", v5);
    printf(
      "%s : find history result index: %d, and this time pattern test fail\n",
      "find_submit_history_result_index",
      *a1);
    snprintf(byte_60F7D4, 0x100u, "find history result index: %d, and this time pattern test fail", *a1);
    sub_3CC5C(byte_60F7D4, v5);
    return 1;
  }
  if ( byte_2741F8 != 1 )
  {
    LOBYTE(v4) = 0;
    while ( 1 )
    {
      v4 = (unsigned __int8)(v4 + 1);
      if ( v4 >= dword_22B69C )
        goto LABEL_10;
      if ( byte_2333A8[(_DWORD)&loc_40A50 * v4 + 265808] == 1 )
        goto LABEL_12;
    }
  }
  LOBYTE(v4) = 0;
LABEL_12:
  *a1 = v4;
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : find history result index: %d, and it is LOOSE_STANDARD\n", "find_submit_history_result_index", *a1);
  snprintf(byte_60F6D4, 0x100u, "find history result index: %d, and it is LOOSE_STANDARD", *a1);
  sub_3CC5C(byte_60F6D4, v5);
  return 0;
}
