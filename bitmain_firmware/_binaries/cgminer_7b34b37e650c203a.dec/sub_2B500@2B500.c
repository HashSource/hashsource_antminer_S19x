int __fastcall sub_2B500(int a1)
{
  _DWORD *v1; // r6
  int v3; // r5
  char v5[16]; // [sp+0h] [bp-810h] BYREF
  char v6[2048]; // [sp+10h] [bp-800h] BYREF

  v1 = *(_DWORD **)(a1 + 36);
  v3 = v1[1];
  snprintf(v5, 0x10u, "%d/Miner", *(_DWORD *)a1);
  sub_250A8(v5);
  sub_2AE8C(a1);
  if ( (*(int (__fastcall **)(int))(v3 + 52))(a1) )
  {
    if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
    {
      strcpy(v6, "Waiting on sem in miner thread");
      sub_20F58(7, v6, 0);
    }
    sub_25228((sem_t *)(a1 + 16), "cgminer.c", "miner_thread", 9801);
    v1[58] = time(0);
    (*(void (__fastcall **)(int))(v3 + 60))(a1);
    (*(void (__fastcall **)(int))(v3 + 88))(a1);
    return 0;
  }
  else
  {
    sub_24DC4(v1, 0);
    return 0;
  }
}
