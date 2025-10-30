int __fastcall sub_258D1C(int a1, _DWORD *a2)
{
  _BYTE *v2; // r3
  unsigned int v3; // r12
  int v4; // r6
  char *v5; // r7
  char *v6; // r0
  char *v7; // r0
  int v8; // r4
  char v11; // [sp+1Bh] [bp-31h] BYREF
  struct obstack v12; // [sp+1Ch] [bp-30h] BYREF

  v2 = (_BYTE *)(*a2)++;
  v3 = (unsigned __int8)*v2;
  if ( v3 == 98 )
  {
    LOBYTE(v3) = 8;
    v4 = 8;
    goto LABEL_10;
  }
  if ( v3 > 0x62 )
  {
    if ( v3 == 114 )
    {
      LOBYTE(v3) = 13;
      v4 = 13;
      goto LABEL_10;
    }
    if ( v3 > 0x72 )
    {
      if ( v3 == 116 )
      {
        LOBYTE(v3) = 9;
        v4 = 9;
        goto LABEL_10;
      }
      if ( v3 == 118 )
      {
        LOBYTE(v3) = 11;
        v4 = 11;
        goto LABEL_10;
      }
    }
    else
    {
      if ( v3 == 102 )
      {
        LOBYTE(v3) = 12;
        v4 = 12;
LABEL_10:
        v11 = v3;
        obstack_begin(&v12, 0, 0, (void *(*)(int))sub_93028, sub_2582D0);
        v5 = sub_EEBE8();
        v6 = sub_EEBB8();
        sub_EEF04(v5, v6, &v11, 1u, 1, &v12, 0);
        if ( v12.next_free - v12.object_base != 1 )
        {
          obstack_free(&v12, 0);
          v7 = sub_EEBE8();
          sub_946E0(
            "The escape sequence `\\%c' is equivalent to plain `%c', which has no equivalent\n"
            "in the `%s' character set.",
            v4,
            v4,
            v7);
        }
        v8 = (unsigned __int8)*v12.object_base;
        obstack_free(&v12, 0);
        return v8;
      }
      if ( v3 == 110 )
      {
        LOBYTE(v3) = 10;
        v4 = 10;
        goto LABEL_10;
      }
    }
LABEL_17:
    v4 = (unsigned __int8)*v2;
    goto LABEL_10;
  }
  if ( v3 > 0x37 )
  {
    if ( v3 == 97 )
      v3 = 7;
    v4 = v3;
    goto LABEL_10;
  }
  if ( v3 < 0x30 )
  {
    if ( !*v2 )
    {
      *a2 = v2;
      return 0;
    }
    if ( v3 == 10 )
      return -2;
    goto LABEL_17;
  }
  v8 = ((int (__fastcall *)(_DWORD))loc_EEE94)((unsigned __int8)*v2);
  if ( (unsigned int)*(unsigned __int8 *)*a2 - 48 <= 7 )
  {
    ++*a2;
    v8 = 8 * v8 + ((int (*)(void))loc_EEE94)();
    if ( (unsigned int)*(unsigned __int8 *)*a2 - 48 <= 7 )
    {
      ++*a2;
      return 8 * v8 + ((int (*)(void))loc_EEE94)();
    }
  }
  return v8;
}
