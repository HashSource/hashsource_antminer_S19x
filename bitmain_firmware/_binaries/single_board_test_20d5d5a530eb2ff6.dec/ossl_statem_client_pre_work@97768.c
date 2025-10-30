int __fastcall ossl_statem_client_pre_work(_DWORD *a1)
{
  int v1; // r3
  bool v2; // zf
  int v3; // r3
  int result; // r0
  int v5; // r0
  int v6; // r3

  switch ( a1[16] )
  {
    case 1:
    case 0x2E:
      goto LABEL_5;
    case 0xC:
      v3 = a1[1];
      a1[10] = 0;
      if ( (*(_DWORD *)(*(_DWORD *)(v3 + 100) + 48) & 8) == 0 )
        goto LABEL_7;
      v5 = sub_A915C();
      v6 = 2;
      if ( !v5 )
        v6 = 0;
      result = v6;
      break;
    case 0x10:
      if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 && a1[35] )
        a1[23] = 0;
      goto LABEL_7;
    case 0x2F:
      v1 = a1[26];
      v2 = v1 == 0;
      if ( v1 )
        v2 = v1 == 7;
      if ( v2 )
        goto LABEL_7;
LABEL_5:
      result = sub_9C244();
      break;
    default:
LABEL_7:
      result = 2;
      break;
  }
  return result;
}
