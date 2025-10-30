int __fastcall sub_54B78(int a1)
{
  _DWORD *v1; // r6
  int v3; // r5
  char v5[16]; // [sp+0h] [bp-810h] BYREF
  char v6[2048]; // [sp+10h] [bp-800h] BYREF

  v1 = *(_DWORD **)(a1 + 36);
  v3 = v1[1];
  snprintf(v5, 0x10u, "%d/Miner", *(_DWORD *)a1);
  sub_4BD10(v5);
  sub_51AAC(a1);
  if ( (*(int (__fastcall **)(int))(v3 + 52))(a1) )
  {
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      strcpy(v6, "Waiting on sem in miner thread");
      sub_47AB4(7, v6, 0);
    }
    sub_4BE90((sem_t *)(a1 + 16), "cgminer.c", "miner_thread", 9795);
    v1[58] = time(0);
    (*(void (__fastcall **)(int))(v3 + 60))(a1);
    (*(void (__fastcall **)(int))(v3 + 88))(a1);
    return 0;
  }
  else
  {
    sub_4BA2C(v1, 0);
    return 0;
  }
}
