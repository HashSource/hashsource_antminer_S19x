_DWORD *__fastcall sub_1307B8(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  pthread_rwlock_t *v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r0

  v6 = sub_E0740((void *)0x28);
  if ( v6 )
  {
    v7 = sub_10C510();
    v6[9] = v7;
    if ( v7 )
    {
      sub_1307AC((int)v6);
      if ( (!a1 || (v8 = sub_B8A2C(a1), (*v6 = v8) != 0))
        && (!a2 || (v9 = sub_B8A2C(a2), (v6[1] = v9) != 0))
        && (v10 = sub_B8A2C(a3), (v6[3] = v10) != 0) )
      {
        if ( sub_B87C0(a3, 4) )
          sub_B87B8(v6[3], 4);
        v6[5] = -1;
        return v6;
      }
      else
      {
        sub_130600((int)v6);
        return 0;
      }
    }
    else
    {
      sub_D0048(3, 102, 65, (int)"crypto/bn/bn_blind.c", 43);
      CRYPTO_free(v6);
      return 0;
    }
  }
  else
  {
    sub_D0048(3, 102, 65, (int)"crypto/bn/bn_blind.c", 37);
    return 0;
  }
}
