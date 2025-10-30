bool __fastcall sub_11659C(int a1, int *a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r6

  v2 = (_DWORD *)*a2;
  if ( a1 == 3 )
  {
    sub_DC2BC(3u, *a2, v2 + 29);
    sub_116974(v2[49]);
    j_ASN1_STRING_free(v2[36]);
    sub_11A1A4(v2[37]);
    sub_11D418(v2[39]);
    sub_116BD0(v2[38]);
    GENERAL_NAMES_free(v2[40]);
    sub_11E82C(v2[41]);
    sub_10BFDC(v2[42], (void (__fastcall *)(int))IPAddressFamily_free);
    sub_11A980(v2[43]);
    return 1;
  }
  else
  {
    if ( a1 == 4 )
    {
      v3 = v2 + 29;
      sub_DC2BC(3u, *a2, v2 + 29);
      sub_116974(v2[49]);
      j_ASN1_STRING_free(v2[36]);
      sub_11A1A4(v2[37]);
      sub_11D418(v2[39]);
      sub_116BD0(v2[38]);
      GENERAL_NAMES_free(v2[40]);
      sub_11E82C(v2[41]);
      sub_10BFDC(v2[42], (void (__fastcall *)(int))IPAddressFamily_free);
      sub_11A980(v2[43]);
    }
    else
    {
      if ( a1 != 1 )
        return 1;
      v3 = v2 + 29;
    }
    v2[51] = 0;
    v2[33] = 0;
    v2[34] = 0;
    v2[35] = 0;
    v2[32] = 0;
    v2[36] = 0;
    v2[37] = 0;
    v2[38] = 0;
    v2[40] = 0;
    v2[41] = 0;
    v2[42] = 0;
    v2[43] = 0;
    v2[49] = 0;
    v2[39] = 0;
    v2[30] = -1;
    v2[31] = -1;
    return sub_DBE44(3u, (int)v2, v3) != 0;
  }
}
