int sub_26C30()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r4
  char *v23; // r0
  char *v24; // r6
  int v26; // [sp+Ch] [bp-4h] BYREF

  prctl(15, "api", 0);
  while ( !*(_BYTE *)(dword_241D5C + 364) )
  {
    sleep(1u);
    v0 = sub_1B370(0, 1);
    v1 = sub_1B394(v0, 1);
    v2 = sub_1B3B8(v1, 1);
    sub_1B440(v2, 1);
    nullsub_2();
    v4 = sub_1B780(v3);
    v5 = sub_1B7DC(v4, 1);
    v6 = sub_1B7F4(v5, 1);
    v7 = sub_1B8D0(v6);
    v8 = sub_1B964(v7);
    v9 = sub_1BA48(v8);
    v10 = sub_1BAE8(v9, 1);
    v11 = sub_1BBE0(v10, 1);
    v12 = sub_1BBF8(v11, 1);
    v13 = sub_1BC68(v12, 1);
    v14 = sub_1BCD4(v13, 1);
    v15 = sub_1BD40(v14, 1);
    v16 = sub_1BDA4(v15, 1);
    v17 = sub_1BED0(v16, 1);
    v18 = sub_1BF54(v17, 1);
    v19 = sub_26BCC(v18);
    v20 = sub_1B340(v19, 1);
    v21 = sub_1B358(v20, 1);
    v22 = v21;
    if ( v21 )
    {
      v23 = sub_269B8(v21, (size_t *)&v26);
      v24 = v23;
      if ( v23 )
      {
        sub_25A28((int)v23, v26);
        free(v24);
      }
    }
    sub_26B60(v22);
  }
  return 0;
}
