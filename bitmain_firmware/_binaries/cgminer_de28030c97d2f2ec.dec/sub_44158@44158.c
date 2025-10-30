_DWORD *__fastcall sub_44158(int a1, int a2)
{
  __int64 v2; // r2
  __int64 v3; // r2
  char v7[2048]; // [sp+Ch] [bp-810h] BYREF
  _DWORD *v8; // [sp+80Ch] [bp-10h] BYREF
  time_t v9; // [sp+810h] [bp-Ch]
  _DWORD *v10; // [sp+814h] [bp-8h]

  v10 = *(_DWORD **)(a1 + 36);
  v8 = 0;
  sub_3CA00(a1);
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    strcpy(v7, "Popping work from get queue to get work");
    sub_1E4EC(7, v7, 0);
  }
  v9 = time(0);
  while ( !v8 )
  {
    v8 = (_DWORD *)sub_42D98(1);
    if ( sub_35AAC((int)v8, 0) )
    {
      sub_36898((void **)&v8, "cgminer.c", "get_work", 8723);
      sub_36B64();
    }
  }
  v9 = time(0) - v9;
  if ( v9 > 0 )
  {
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v7, 0x800u, "Get work blocked for %ld seconds", v9);
      sub_1E4EC(7, v7, 0);
    }
    v10[58] += v9;
  }
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v7, 0x800u, "Got work from get queue to get work for thread %d", a2);
    sub_1E4EC(7, v7, 0);
  }
  v8[64] = a2;
  if ( byte_87FB0 )
    sub_44024(v10, v8);
  sub_3C9A4(a1);
  *((_BYTE *)v8 + 272) = 1;
  if ( *(double *)(v10[1] + 104) <= *((double *)v8 + 47) )
    v2 = *(_QWORD *)(v10[1] + 104);
  else
    v2 = *((_QWORD *)v8 + 47);
  *((_QWORD *)v8 + 28) = v2;
  if ( *(double *)(v10[1] + 112) <= *((double *)v8 + 28) )
    v3 = *((_QWORD *)v8 + 28);
  else
    v3 = *(_QWORD *)(v10[1] + 112);
  *((_QWORD *)v8 + 28) = v3;
  return v8;
}
