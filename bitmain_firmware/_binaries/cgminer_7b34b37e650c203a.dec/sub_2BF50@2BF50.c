int __fastcall sub_2BF50(int a1, int a2, int (__fastcall **a3)(int))
{
  int v6; // r3
  char v8[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
  {
    snprintf(v8, 0x800u, "Thread %d being disabled", a2);
    sub_20F58(4, v8, 0);
  }
  v6 = (unsigned __int8)byte_68BD5;
  *(_QWORD *)(*(_DWORD *)(a1 + 36) + 48) = 0;
  if ( v6 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    strcpy(v8, "Waiting on sem in miner thread");
    sub_20F58(7, v8, 0);
  }
  sub_25228((sem_t *)(a1 + 16), "cgminer.c", "mt_disable", 9153);
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
  {
    snprintf(v8, 0x800u, "Thread %d being re-enabled", a2);
    sub_20F58(4, v8, 0);
  }
  return (*a3)(a1);
}
