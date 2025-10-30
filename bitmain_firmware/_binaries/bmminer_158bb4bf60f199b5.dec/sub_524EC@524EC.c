int __fastcall sub_524EC(int a1, int a2, int (__fastcall **a3)(int))
{
  int v6; // r3
  char v8[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
  {
    snprintf(v8, 0x800u, "Thread %d being disabled", a2);
    sub_47AB4(4, v8, 0);
  }
  v6 = (unsigned __int8)byte_1AECC5;
  *(_QWORD *)(*(_DWORD *)(a1 + 36) + 48) = 0;
  if ( v6 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    strcpy(v8, "Waiting on sem in miner thread");
    sub_47AB4(7, v8, 0);
  }
  sub_4BE90((sem_t *)(a1 + 16), "cgminer.c", "mt_disable", 9147);
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
  {
    snprintf(v8, 0x800u, "Thread %d being re-enabled", a2);
    sub_47AB4(4, v8, 0);
  }
  return (*a3)(a1);
}
