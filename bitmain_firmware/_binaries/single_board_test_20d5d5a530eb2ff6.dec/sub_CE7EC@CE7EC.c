int __fastcall sub_CE7EC(const char *a1)
{
  int v2; // r6
  _DWORD *v3; // r0
  int v4; // r7
  int v5; // r4
  int v6; // r3
  int v7; // r7
  int v8; // r4
  int v9; // r3
  int v10; // r7
  int v11; // r4
  int v12; // r3
  int v13; // r7
  int v14; // r4
  int v15; // r3
  int v16; // r7
  int v17; // r4
  int v18; // r3
  int v19; // r7
  int v20; // r4
  int v21; // r3
  const char *v23; // r5
  int v24; // r0
  int v25; // r4
  unsigned int v26; // r3
  unsigned int *v27; // r2
  unsigned int v28; // r0
  unsigned int v29; // r1
  unsigned int v30; // r3
  bool v31; // zf
  unsigned int v32; // r7

  if ( !a1 )
  {
    sub_D0048(38, 106, 67, "crypto/engine/eng_list.c", 369);
    return 0;
  }
  if ( !sub_10C594(&engine_lock_init, do_engine_lock_init_ossl_) || !do_engine_lock_init_ossl_ret_ )
  {
    sub_D0048(38, 106, 65, "crypto/engine/eng_list.c", 373);
    return 0;
  }
  sub_10C554(global_engine_lock);
  v2 = dword_6DF40C;
  if ( dword_6DF40C )
  {
    while ( strcmp(a1, *(const char **)v2) )
    {
      v2 = *(_DWORD *)(v2 + 96);
      if ( !v2 )
        goto LABEL_12;
    }
    if ( (*(_DWORD *)(v2 + 76) & 4) != 0 )
    {
      v3 = (_DWORD *)sub_CDEA4();
      if ( !v3 )
        goto LABEL_12;
      v4 = *(_DWORD *)(v2 + 4);
      v5 = *(_DWORD *)(v2 + 8);
      *v3 = *(_DWORD *)v2;
      v6 = *(_DWORD *)(v2 + 12);
      v3[1] = v4;
      v7 = *(_DWORD *)(v2 + 16);
      v3[2] = v5;
      v8 = *(_DWORD *)(v2 + 20);
      v3[3] = v6;
      v9 = *(_DWORD *)(v2 + 24);
      v3[4] = v7;
      v10 = *(_DWORD *)(v2 + 28);
      v3[5] = v8;
      v11 = *(_DWORD *)(v2 + 32);
      v3[6] = v9;
      v12 = *(_DWORD *)(v2 + 36);
      v3[7] = v10;
      v13 = *(_DWORD *)(v2 + 44);
      v3[8] = v11;
      v14 = *(_DWORD *)(v2 + 48);
      v3[9] = v12;
      v15 = *(_DWORD *)(v2 + 52);
      v3[11] = v13;
      v16 = *(_DWORD *)(v2 + 56);
      v3[12] = v14;
      v17 = *(_DWORD *)(v2 + 60);
      v3[13] = v15;
      v18 = *(_DWORD *)(v2 + 64);
      v3[15] = v17;
      v3[14] = v16;
      v3[16] = v18;
      v19 = *(_DWORD *)(v2 + 72);
      v20 = *(_DWORD *)(v2 + 76);
      v21 = *(_DWORD *)(v2 + 108);
      v2 = (int)v3;
      v3[18] = v19;
      v3[19] = v20;
      v3[27] = v21;
      sub_CE1E4(v3, 0, 0);
    }
    else
    {
      __dmb(0xBu);
      v26 = *(_DWORD *)(v2 + 80);
      v27 = (unsigned int *)(v2 + 80);
      __dmb(0xBu);
      v28 = v26 + 1;
      v29 = v26;
      __dmb(0xBu);
      while ( 1 )
      {
        do
        {
          v30 = __ldrex(v27);
          v31 = v30 == v29;
          if ( v30 != v29 )
            break;
          v32 = __strex(v28, v27);
          v31 = v32 == 0;
        }
        while ( v32 );
        __dmb(0xBu);
        if ( v31 )
          break;
        v29 = v30;
        v28 = v30 + 1;
        __dmb(0xBu);
      }
    }
    sub_10C564(global_engine_lock);
    return v2;
  }
LABEL_12:
  sub_10C564(global_engine_lock);
  if ( !strcmp(a1, "dynamic") )
    goto LABEL_29;
  v23 = (const char *)j_j_secure_getenv("OPENSSL_ENGINES");
  if ( !v23 )
    v23 = "/home/mylz4/openssl/install/lib/engines-1.1";
  v24 = sub_CE7EC("dynamic");
  v25 = v24;
  if ( !v24 )
  {
LABEL_29:
    v25 = 0;
  }
  else if ( sub_15A230(v24, "ID", a1, 0)
         && sub_15A230(v25, "DIR_LOAD", "2", 0)
         && sub_15A230(v25, "DIR_ADD", v23, 0)
         && sub_15A230(v25, "LIST_ADD", "1", 0)
         && sub_15A230(v25, "LOAD", 0, 0) )
  {
    return v25;
  }
  sub_CE00C(v25);
  sub_D0048(38, 106, 116, "crypto/engine/eng_list.c", 421);
  sub_D1240(2, "id=", a1);
  return 0;
}
