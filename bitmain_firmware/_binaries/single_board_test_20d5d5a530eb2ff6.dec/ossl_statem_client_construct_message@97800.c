int __fastcall ossl_statem_client_construct_message(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0
  int (*v5)(); // r0

  switch ( a1[16] )
  {
    case 0xC:
      result = 1;
      *a3 = tls_construct_client_hello;
      *a4 = 1;
      break;
    case 0xD:
      result = 1;
      *a3 = tls_construct_client_certificate;
      *a4 = 11;
      break;
    case 0xE:
      result = 1;
      *a3 = tls_construct_client_key_exchange;
      *a4 = 16;
      break;
    case 0xF:
      result = 1;
      *a3 = tls_construct_cert_verify;
      *a4 = 15;
      break;
    case 0x10:
      if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
        v5 = dtls_construct_change_cipher_spec;
      else
        v5 = tls_construct_change_cipher_spec;
      *a3 = v5;
      *a4 = 257;
      result = 1;
      break;
    case 0x11:
      result = 1;
      *a3 = tls_construct_next_proto;
      *a4 = 67;
      break;
    case 0x12:
      result = 1;
      *a3 = tls_construct_finished;
      *a4 = 20;
      break;
    case 0x2B:
      result = 1;
      *a3 = tls_construct_key_update;
      *a4 = 24;
      break;
    case 0x2F:
      *a3 = 0;
      result = 1;
      *a4 = -1;
      break;
    case 0x30:
      result = 1;
      *a3 = tls_construct_end_of_early_data;
      *a4 = 5;
      break;
    default:
      sub_95494(a1, 80, 430, 236, (int)"ssl/statem/statem_clnt.c", 895);
      result = 0;
      break;
  }
  return result;
}
