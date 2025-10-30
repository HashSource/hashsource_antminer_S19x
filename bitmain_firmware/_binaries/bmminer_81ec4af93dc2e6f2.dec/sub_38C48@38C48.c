int __fastcall sub_38C48(int a1, int a2, int a3, int a4)
{
  int v7; // r3
  int v8; // r0
  pthread_mutex_t *v9; // r10
  int v10; // r6
  int v11; // r8
  int v12; // r5
  int v13; // r3
  int *v14; // r6
  int v15; // r2
  int v16; // r10
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r6
  int v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r3
  pthread_mutex_t *mutex; // [sp+Ch] [bp-830h]
  int v27; // [sp+18h] [bp-824h]
  int v28; // [sp+1Ch] [bp-820h]
  int v29; // [sp+20h] [bp-81Ch]
  _BYTE v30[8]; // [sp+28h] [bp-814h] BYREF
  char v31[8]; // [sp+30h] [bp-80Ch] BYREF
  char s[2052]; // [sp+38h] [bp-804h] BYREF

  if ( sub_266F0(a3) )
  {
    pthread_mutex_lock(&stru_B42D4);
    sub_18700();
    byte_B42EC = 1;
    sub_3848C();
    if ( a1 == 4 )
    {
      sub_265B0();
      sub_76830((unsigned __int8)a3);
    }
    else
    {
      v8 = sub_265B0();
      if ( a1 == 16 )
        sub_7684C((unsigned __int8)a3, a2 * v8, 2);
      else
        sub_7709C((unsigned __int8)a3, a2 * v8, (unsigned __int8)a1);
    }
    v9 = &stru_B42BC;
    v27 = 0;
    v29 = 0;
    usleep((__useconds_t)&off_186A0);
    do
    {
      pthread_mutex_lock(v9);
      v10 = dword_5BE200;
      v11 = dword_5BE200;
      if ( dword_5BE200 > 0 )
      {
        v12 = 0;
        mutex = v9;
        while ( 1 )
        {
          dword_5BE200 = v10 - 1;
          ++v12;
          v13 = dword_5BE1FC + 1;
          v14 = &dword_5BE1F8[2 * dword_5BE1FC + 2];
          if ( (unsigned int)(dword_5BE1FC + 1) > 0x1FE )
            v13 = 0;
          v15 = *((unsigned __int8 *)v14 + 11);
          dword_5BE1FC = v13;
          if ( v15 == a3
            && *((_BYTE *)v14 + 10) == 64
            && (v16 = *((unsigned __int8 *)v14 + 9), sub_265B0(), sub_8C490(v16) == a2)
            && (v28 = *((unsigned __int16 *)v14 + 3),
                ++v27,
                v17 = sub_26570(),
                sub_8C474(v28, v17),
                !*(_DWORD *)(a4 + 4 * v18)) )
          {
            v19 = v14[1];
            ++v29;
            v20 = sub_26570();
            sub_8C474(HIWORD(v19), v20);
            *(_DWORD *)(a4 + 4 * v21) = (unsigned __int16)v19;
            if ( v11 == v12 )
            {
LABEL_20:
              v9 = mutex;
              pthread_mutex_unlock(mutex);
              goto LABEL_21;
            }
          }
          else if ( v11 == v12 )
          {
            goto LABEL_20;
          }
          v10 = dword_5BE200;
        }
      }
      pthread_mutex_unlock(v9);
      if ( !v10 )
        usleep(0x3E8u);
LABEL_21:
      sub_3D7A0(v31);
    }
    while ( sub_3DA78(v31, v30) <= 199 );
    if ( v29 != sub_26570() && (unsigned int)off_AFC24 > 3 )
    {
      v22 = sub_26570();
      snprintf(s, 0x800u, "recv core response not enough!!!, total recv::%d, valid::%d, need::%d.\n", v27, v29, v22);
      sub_3AF5C(3, s, 0, v23);
    }
    byte_B42EC = 0;
    sub_18714();
    pthread_mutex_unlock(&stru_B42D4);
    return 0;
  }
  else
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "chain::%d don't exist!!!\n", a3);
      sub_3AF5C(3, s, 0, v7);
    }
    return -1;
  }
}
