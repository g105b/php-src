/* This is a generated file, edit the .stub.php file instead. */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_x509_export_to_file, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, x509)
	ZEND_ARG_TYPE_INFO(0, outfilename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, notext, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_x509_export, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, x509)
	ZEND_ARG_INFO(1, out)
	ZEND_ARG_TYPE_INFO(0, notext, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_x509_fingerprint, 0, 0, 1)
	ZEND_ARG_INFO(0, x509)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, raw_output, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_x509_check_private_key, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, cert)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_x509_verify, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, cert)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_x509_parse, 0, 0, 1)
	ZEND_ARG_INFO(0, x509)
	ZEND_ARG_TYPE_INFO(0, shortname, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_x509_checkpurpose, 0, 0, 2)
	ZEND_ARG_INFO(0, x509cert)
	ZEND_ARG_TYPE_INFO(0, purpose, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cainfo, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, untrustedfile, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_x509_read, 0, 0, 1)
	ZEND_ARG_INFO(0, cert)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_x509_free, 0, 0, 1)
	ZEND_ARG_INFO(0, x509)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs12_export_to_file, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, x509cert)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
	ZEND_ARG_INFO(0, priv_key)
	ZEND_ARG_TYPE_INFO(0, pass, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, args, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs12_export, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, x509)
	ZEND_ARG_INFO(1, out)
	ZEND_ARG_INFO(0, priv_key)
	ZEND_ARG_TYPE_INFO(0, pass, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, args, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs12_read, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pkcs12, IS_STRING, 0)
	ZEND_ARG_INFO(1, certs)
	ZEND_ARG_TYPE_INFO(0, pass, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_csr_export_to_file, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, csr)
	ZEND_ARG_TYPE_INFO(0, outfilename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, notext, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_csr_export, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, csr)
	ZEND_ARG_INFO(1, out)
	ZEND_ARG_TYPE_INFO(0, notext, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_csr_sign, 0, 0, 4)
	ZEND_ARG_INFO(0, csr)
	ZEND_ARG_INFO(0, cacert)
	ZEND_ARG_INFO(0, priv_key)
	ZEND_ARG_TYPE_INFO(0, days, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, config_args, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, serial, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_csr_new, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, dn, IS_ARRAY, 0)
	ZEND_ARG_INFO(1, privkey)
	ZEND_ARG_TYPE_INFO(0, configargs, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, extraattribs, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_csr_get_subject, 0, 0, 1)
	ZEND_ARG_INFO(0, csr)
	ZEND_ARG_TYPE_INFO(0, use_shortnames, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_openssl_csr_get_public_key arginfo_openssl_csr_get_subject

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_pkey_new, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, configargs, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkey_export_to_file, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_TYPE_INFO(0, outfilename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, passphrase, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, configargs, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkey_export, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(1, out)
	ZEND_ARG_TYPE_INFO(0, passphrase, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, configargs, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

#define arginfo_openssl_pkey_get_public arginfo_openssl_x509_read

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkey_free, 0, 1, IS_VOID, 0)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_pkey_get_private, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_TYPE_INFO(0, passphrase, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_pkey_get_details, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_pbkdf2, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, salt, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, key_length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iterations, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, digest_algorithm, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_pkcs7_verify, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signerscerts, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cainfo, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, extracerts, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, content, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pk7, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs7_encrypt, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, infile, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, outfile, IS_STRING, 0)
	ZEND_ARG_INFO(0, recipcerts)
	ZEND_ARG_TYPE_INFO(0, headers, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cipher, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs7_sign, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, infile, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, outfile, IS_STRING, 0)
	ZEND_ARG_INFO(0, signcert)
	ZEND_ARG_INFO(0, signkey)
	ZEND_ARG_TYPE_INFO(0, headers, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extracertsfilename, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs7_decrypt, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, infilename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, outfilename, IS_STRING, 0)
	ZEND_ARG_INFO(0, recipcert)
	ZEND_ARG_INFO(0, recipkey)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs7_read, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, infilename, IS_STRING, 0)
	ZEND_ARG_INFO(1, certs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_private_encrypt, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(1, crypted)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_TYPE_INFO(0, padding, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_openssl_private_decrypt arginfo_openssl_private_encrypt

#define arginfo_openssl_public_encrypt arginfo_openssl_private_encrypt

#define arginfo_openssl_public_decrypt arginfo_openssl_private_encrypt

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_error_string, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_sign, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(1, signature)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_verify, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, signature, IS_STRING, 0)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_seal, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(1, sealdata)
	ZEND_ARG_INFO(1, ekeys)
	ZEND_ARG_TYPE_INFO(0, pubkeys, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_INFO(1, iv)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_open, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(1, opendata)
	ZEND_ARG_TYPE_INFO(0, ekey, IS_STRING, 0)
	ZEND_ARG_INFO(0, privkey)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, iv, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_get_md_methods, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, aliases)
ZEND_END_ARG_INFO()

#define arginfo_openssl_get_cipher_methods arginfo_openssl_get_md_methods

#if defined(HAVE_EVP_PKEY_EC)
ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_get_curve_names, 0, 0, 0)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_digest, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, raw_output, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_encrypt, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iv, IS_STRING, 0)
	ZEND_ARG_INFO(1, tag)
	ZEND_ARG_TYPE_INFO(0, aad, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tag_length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_decrypt, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iv, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, aad, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_cipher_iv_length, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_dh_compute_key, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, pub_key, IS_STRING, 0)
	ZEND_ARG_INFO(0, dh_key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_pkey_derive, 0, 0, 2)
	ZEND_ARG_INFO(0, peer_pub_key)
	ZEND_ARG_INFO(0, priv_key)
	ZEND_ARG_TYPE_INFO(0, keylen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_random_pseudo_bytes, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_INFO(1, result_is_strong)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_spki_new, 0, 0, 2)
	ZEND_ARG_INFO(0, privkey)
	ZEND_ARG_TYPE_INFO(0, challenge, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, algo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_spki_verify, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, spki, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_openssl_spki_export, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, spki, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_openssl_spki_export_challenge arginfo_openssl_spki_export

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_get_cert_locations, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()
