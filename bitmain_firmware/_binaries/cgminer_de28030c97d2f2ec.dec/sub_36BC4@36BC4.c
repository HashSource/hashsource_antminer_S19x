void sub_36BC4()
{
  _DWORD *v0; // r3
  int v1; // r3
  _DWORD *v2; // r3
  char v3[8]; // [sp+4h] [bp-818h] BYREF
  _DWORD *v4; // [sp+804h] [bp-18h] BYREF
  int v5; // [sp+808h] [bp-14h]
  _DWORD *v6; // [sp+80Ch] [bp-10h]
  int v7; // [sp+810h] [bp-Ch]
  _DWORD *v8; // [sp+814h] [bp-8h]

  v7 = 0;
  sub_2E354((pthread_mutex_t *)dword_87FE4, "cgminer.c", "discard_stale", 5441);
  v4 = (_DWORD *)dword_87E98;
  if ( dword_87E98 )
    v0 = *(_DWORD **)(dword_87E98 + 352);
  else
    v0 = 0;
  v8 = v0;
  while ( v4 )
  {
    if ( sub_35AAC((int)v4, 0) )
    {
      if ( v4[87] || v4[88] )
      {
        v6 = v4 + 86;
        if ( (_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 16)
                      - *(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 20)) == v4 )
          *(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 16) = v4[87] + *(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 20);
        if ( v4[87] )
          *(_DWORD *)(v4[87] + *(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 20) + 8) = v4[88];
        else
          dword_87E98 = v4[88];
        if ( v6[2] )
          *(_DWORD *)(v6[2] + *(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 20) + 4) = v6[1];
        v5 = (*(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 4) - 1) & v6[7];
        v1 = **(_DWORD **)(dword_87E98 + 344) + 12 * v5;
        --*(_DWORD *)(v1 + 4);
        if ( *(_DWORD **)(**(_DWORD **)(dword_87E98 + 344) + 12 * v5) == v6 )
          *(_DWORD *)(**(_DWORD **)(dword_87E98 + 344) + 12 * v5) = v6[4];
        if ( v6[3] )
          *(_DWORD *)(v6[3] + 16) = v6[4];
        if ( v6[4] )
          *(_DWORD *)(v6[4] + 12) = v6[3];
        --*(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 12);
      }
      else
      {
        free(**(void ***)(dword_87E98 + 344));
        free(*(void **)(dword_87E98 + 344));
        dword_87E98 = 0;
      }
      sub_36898((void **)&v4, "cgminer.c", "discard_stale", 5448);
      ++v7;
    }
    v4 = v8;
    if ( v8 )
      v2 = (_DWORD *)v8[88];
    else
      v2 = 0;
    v8 = v2;
  }
  pthread_cond_signal(&stru_92030);
  sub_2E484((pthread_mutex_t *)dword_87FE4, "cgminer.c", "discard_stale", 5454);
  if ( v7 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v3, 0x800u, "Discarded %d stales that didn't match current hash", v7);
    sub_1E4EC(7, v3, 0);
  }
}
