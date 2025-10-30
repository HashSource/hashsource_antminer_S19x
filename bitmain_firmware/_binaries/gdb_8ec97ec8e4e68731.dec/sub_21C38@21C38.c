bool __fastcall sub_21C38(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r0
  const char *v8; // r7
  __int64 v9; // r0
  __int64 v10; // r0
  _DWORD v11[3]; // [sp+0h] [bp-Ch] BYREF

  v5 = ((int (*)(void))loc_165C28)();
  sub_1B240C(v11, a2);
  if ( !v11[0] )
    goto LABEL_19;
  v6 = *(__int16 *)(v11[0] + 22);
  if ( v6 == -1 )
  {
    sub_94700("arm-tdep.c", 544, "Section index is uninitialized");
    JUMPOUT(0xFFFF0FE0);
  }
  if ( *(_DWORD *)(v11[0] + 8) + *(_DWORD *)(*(_DWORD *)(v11[1] + 144) + 4 * v6) == a2
    && (v8 = *(const char **)v11[0]) != 0 )
  {
    if ( sub_338BD4(*(_DWORD *)v11[0], "_from_thumb") )
      v8 += 2;
    return !strncmp(v8, "__truncdfsf2", 0xCu)
        || !strncmp(v8, "__aeabi_d2f", 0xBu)
        || !strncmp(v8, "__tls_get_addr", 0xEu)
        || strncmp(v8, "__aeabi_read_tp", 0xFu) == 0;
  }
  else
  {
LABEL_19:
    if ( a3 )
      return 0;
    LODWORD(v9) = sub_FA9D4(a2, 4, v5);
    if ( v9 != __PAIR64__(loc_21DB4, loc_21DB0) )
    {
      return 0;
    }
    else
    {
      LODWORD(v10) = sub_FA9D4(a2 + 4, 4, v5);
      return v10 == loc_21DB8;
    }
  }
}
